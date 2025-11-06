
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_EvaluationTypeDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_EvaluationTypeDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义评价返回体
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  EvaluationTypeDto
    : public ModelBase
{
public:
    EvaluationTypeDto();
    virtual ~EvaluationTypeDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EvaluationTypeDto members

    /// <summary>
    /// **参数解释：** 自定义评价主键id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// **参数解释：** 自定义评价名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_EvaluationTypeDto_H_
