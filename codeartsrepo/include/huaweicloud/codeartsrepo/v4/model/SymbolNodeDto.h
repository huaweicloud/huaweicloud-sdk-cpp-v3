
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SymbolNodeDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SymbolNodeDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/DefEntryDto.h>
#include <huaweicloud/codeartsrepo/v4/model/SymbolNodeDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 代码导航符号节点信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  SymbolNodeDto
    : public ModelBase
{
public:
    SymbolNodeDto();
    virtual ~SymbolNodeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SymbolNodeDto members

    /// <summary>
    /// 
    /// </summary>

    DefEntryDto getDef() const;
    bool defIsSet() const;
    void unsetdef();
    void setDef(const DefEntryDto& value);

    /// <summary>
    /// **参数解释：** 子节点信息
    /// </summary>

    std::vector<SymbolNodeDto>& getChildren();
    bool childrenIsSet() const;
    void unsetchildren();
    void setChildren(const std::vector<SymbolNodeDto>& value);


protected:
    DefEntryDto def_;
    bool defIsSet_;
    std::vector<SymbolNodeDto>* children_;
    bool childrenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_SymbolNodeDto_H_
