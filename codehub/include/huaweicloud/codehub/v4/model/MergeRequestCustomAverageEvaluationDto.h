
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestCustomAverageEvaluationDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestCustomAverageEvaluationDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  MergeRequestCustomAverageEvaluationDto
    : public ModelBase
{
public:
    MergeRequestCustomAverageEvaluationDto();
    virtual ~MergeRequestCustomAverageEvaluationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestCustomAverageEvaluationDto members

    /// <summary>
    /// **参数解释：** 自定义评价维度id。
    /// </summary>

    int32_t getEvaluationTypeId() const;
    bool evaluationTypeIdIsSet() const;
    void unsetevaluationTypeId();
    void setEvaluationTypeId(int32_t value);

    /// <summary>
    /// **参数解释：** 自定义评价维度名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释：** 自定义评价维度平均分。
    /// </summary>

    double getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(double value);


protected:
    int32_t evaluationTypeId_;
    bool evaluationTypeIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    double level_;
    bool levelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_MergeRequestCustomAverageEvaluationDto_H_
