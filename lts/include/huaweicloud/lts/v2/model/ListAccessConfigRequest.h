
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListAccessConfigRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListAccessConfigRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/GetAccessConfigListRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListAccessConfigRequest
    : public ModelBase
{
public:
    ListAccessConfigRequest();
    virtual ~ListAccessConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAccessConfigRequest members

    /// <summary>
    /// 该字段填为：application/json;charset&#x3D;UTF-8。
    /// </summary>

    std::string getContentType() const;
    bool contentTypeIsSet() const;
    void unsetcontentType();
    void setContentType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GetAccessConfigListRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GetAccessConfigListRequestBody& value);


protected:
    std::string contentType_;
    bool contentTypeIsSet_;
    GetAccessConfigListRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAccessConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ListAccessConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListAccessConfigRequest_H_
