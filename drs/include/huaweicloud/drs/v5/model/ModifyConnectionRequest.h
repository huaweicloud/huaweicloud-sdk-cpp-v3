
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyConnectionRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyConnectionRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/UpdateConnectionReq.h>
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
class HUAWEICLOUD_DRS_V5_EXPORT  ModifyConnectionRequest
    : public ModelBase
{
public:
    ModifyConnectionRequest();
    virtual ~ModifyConnectionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyConnectionRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 连接ID
    /// </summary>

    std::string getConnectionId() const;
    bool connectionIdIsSet() const;
    void unsetconnectionId();
    void setConnectionId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateConnectionReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateConnectionReq& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string connectionId_;
    bool connectionIdIsSet_;
    UpdateConnectionReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ModifyConnectionRequest& dereference_from_shared_ptr(std::shared_ptr<ModifyConnectionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ModifyConnectionRequest_H_
