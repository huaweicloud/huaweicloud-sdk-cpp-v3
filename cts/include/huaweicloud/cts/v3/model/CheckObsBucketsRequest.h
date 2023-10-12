
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/CheckObsBucketsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  CheckObsBucketsRequest
    : public ModelBase
{
public:
    CheckObsBucketsRequest();
    virtual ~CheckObsBucketsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckObsBucketsRequest members

    /// <summary>
    /// 账户id，参见《云审计服务API参考》“获取账号ID和项目ID”章节。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CheckObsBucketsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CheckObsBucketsRequestBody& value);


protected:
    std::string domainId_;
    bool domainIdIsSet_;
    CheckObsBucketsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckObsBucketsRequest& dereference_from_shared_ptr(std::shared_ptr<CheckObsBucketsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_CheckObsBucketsRequest_H_
