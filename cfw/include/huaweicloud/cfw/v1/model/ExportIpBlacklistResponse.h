
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ExportIpBlacklistResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ExportIpBlacklistResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ExportIpBlacklistResponse
    : public ModelBase, public HttpResponse
{
public:
    ExportIpBlacklistResponse();
    virtual ~ExportIpBlacklistResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportIpBlacklistResponse members

    /// <summary>
    /// 
    /// </summary>

    Object getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const Object& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getContentDisposition() const;
    bool contentDispositionIsSet() const;
    void unsetcontentDisposition();
    void setContentDisposition(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getContentLength() const;
    bool contentLengthIsSet() const;
    void unsetcontentLength();
    void setContentLength(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);


protected:
    Object body_;
    bool bodyIsSet_;
    std::string contentDisposition_;
    bool contentDispositionIsSet_;
    int32_t contentLength_;
    bool contentLengthIsSet_;
    std::string contentType_;
    bool contentTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ExportIpBlacklistResponse_H_
