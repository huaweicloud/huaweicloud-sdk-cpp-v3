
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ParameterInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ParameterInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务参数配置信息
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ParameterInfo
    : public ModelBase
{
public:
    ParameterInfo();
    virtual ~ParameterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParameterInfo members

    /// <summary>
    /// 参数名称，如：“applier_thread_num”，“read_task_num”等
    /// </summary>

    std::string getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetparameterName();
    void setParameterName(const std::string& value);

    /// <summary>
    /// 参数名称对应的参数值，如：“20”，“false”
    /// </summary>

    std::string getParameterValue() const;
    bool parameterValueIsSet() const;
    void unsetparameterValue();
    void setParameterValue(const std::string& value);


protected:
    std::string parameterName_;
    bool parameterNameIsSet_;
    std::string parameterValue_;
    bool parameterValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ParameterInfo_H_
