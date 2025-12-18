
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserQosReqInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserQosReqInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// QOS请求用户信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UserQosReqInfo
    : public ModelBase
{
public:
    UserQosReqInfo();
    virtual ~UserQosReqInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserQosReqInfo members

    /// <summary>
    /// 用户pid
    /// </summary>

    std::string getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(const std::string& value);

    /// <summary>
    /// 用户接入媒体类型
    /// </summary>

    std::string getAccessMediaType() const;
    bool accessMediaTypeIsSet() const;
    void unsetaccessMediaType();
    void setAccessMediaType(const std::string& value);


protected:
    std::string pid_;
    bool pidIsSet_;
    std::string accessMediaType_;
    bool accessMediaTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserQosReqInfo_H_
