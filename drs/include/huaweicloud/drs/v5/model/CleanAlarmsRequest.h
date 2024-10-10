
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CleanAlarmsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CleanAlarmsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CleanAlarmsRequest
    : public ModelBase
{
public:
    CleanAlarmsRequest();
    virtual ~CleanAlarmsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CleanAlarmsRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// DDL序列号。
    /// </summary>

    std::string getAlarmId() const;
    bool alarmIdIsSet() const;
    void unsetalarmId();
    void setAlarmId(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string alarmId_;
    bool alarmIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CleanAlarmsRequest& dereference_from_shared_ptr(std::shared_ptr<CleanAlarmsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CleanAlarmsRequest_H_
