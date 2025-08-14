
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListPropertiesResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListPropertiesResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  ListPropertiesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPropertiesResponse();
    virtual ~ListPropertiesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPropertiesResponse members

    /// <summary>
    /// 设备属性查询ID，用于唯一标识一条属性查询，在下发查询属性时由物联网平台分配获得。
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);

    /// <summary>
    /// 设备上报的属性执行结果。Json格式，具体格式需要应用和设备约定。
    /// </summary>

    Object getResponse() const;
    bool responseIsSet() const;
    void unsetresponse();
    void setResponse(const Object& value);

    /// <summary>
    /// 属性查询异常错误码。
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 属性查询异常错误信息。
    /// </summary>

    Object getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const Object& value);


protected:
    std::string requestId_;
    bool requestIdIsSet_;
    Object response_;
    bool responseIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    Object errorMsg_;
    bool errorMsgIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_ListPropertiesResponse_H_
