
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CustomEvaluationDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CustomEvaluationDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  CustomEvaluationDto
    : public ModelBase
{
public:
    CustomEvaluationDto();
    virtual ~CustomEvaluationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomEvaluationDto members

    /// <summary>
    /// **参数解释：** 自定义评价id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 评价类型id
    /// </summary>

    int32_t getEvaluationTypeId() const;
    bool evaluationTypeIdIsSet() const;
    void unsetevaluationTypeId();
    void setEvaluationTypeId(int32_t value);

    /// <summary>
    /// 评价等级
    /// </summary>

    int32_t getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(int32_t value);

    /// <summary>
    /// 评价名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    int32_t evaluationTypeId_;
    bool evaluationTypeIdIsSet_;
    int32_t level_;
    bool levelIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_CustomEvaluationDto_H_
