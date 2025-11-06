
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictSectionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictSectionDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/ConflictSectionLineDto.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ConflictSectionDto
    : public ModelBase
{
public:
    ConflictSectionDto();
    virtual ~ConflictSectionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConflictSectionDto members

    /// <summary>
    /// 是否冲突
    /// </summary>

    bool isConflict() const;
    bool conflictIsSet() const;
    void unsetconflict();
    void setConflict(bool value);

    /// <summary>
    /// 冲突行列表
    /// </summary>

    std::vector<ConflictSectionLineDto>& getLines();
    bool linesIsSet() const;
    void unsetlines();
    void setLines(const std::vector<ConflictSectionLineDto>& value);

    /// <summary>
    /// 编号
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    bool conflict_;
    bool conflictIsSet_;
    std::vector<ConflictSectionLineDto> lines_;
    bool linesIsSet_;
    std::string id_;
    bool idIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ConflictSectionDto_H_
