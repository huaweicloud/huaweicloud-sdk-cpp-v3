
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestResponse_H_


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
/// Rest请求的响应结果body
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestResponse
    : public ModelBase
{
public:
    RestResponse();
    virtual ~RestResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestResponse members

    /// <summary>
    /// 结果码。
    /// </summary>

    int32_t getReturnCode() const;
    bool returnCodeIsSet() const;
    void unsetreturnCode();
    void setReturnCode(int32_t value);

    /// <summary>
    /// 结果描述。
    /// </summary>

    std::string getReturnDesc() const;
    bool returnDescIsSet() const;
    void unsetreturnDesc();
    void setReturnDesc(const std::string& value);


protected:
    int32_t returnCode_;
    bool returnCodeIsSet_;
    std::string returnDesc_;
    bool returnDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestResponse_H_
