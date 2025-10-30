
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_LtsInfo_job_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_LtsInfo_job_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// LTS信息。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  LtsInfo_job
    : public ModelBase
{
public:
    LtsInfo_job();
    virtual ~LtsInfo_job();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LtsInfo_job members

    /// <summary>
    /// 日志组ID。
    /// </summary>

    std::string getLogGroupId() const;
    bool logGroupIdIsSet() const;
    void unsetlogGroupId();
    void setLogGroupId(const std::string& value);

    /// <summary>
    /// 日志流ID。
    /// </summary>

    std::string getLogStreamId() const;
    bool logStreamIdIsSet() const;
    void unsetlogStreamId();
    void setLogStreamId(const std::string& value);

    /// <summary>
    /// 是否开启LTS。
    /// </summary>

    bool isLtsEnabled() const;
    bool ltsEnabledIsSet() const;
    void unsetltsEnabled();
    void setLtsEnabled(bool value);


protected:
    std::string logGroupId_;
    bool logGroupIdIsSet_;
    std::string logStreamId_;
    bool logStreamIdIsSet_;
    bool ltsEnabled_;
    bool ltsEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_LtsInfo_job_H_
