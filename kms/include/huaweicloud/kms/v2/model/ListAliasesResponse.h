
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasesResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasesResponse_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ListAliasResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListAliasesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAliasesResponse();
    virtual ~ListAliasesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAliasesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ListAliasResponseBody>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<ListAliasResponseBody>& value);


protected:
    std::vector<ListAliasResponseBody> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListAliasesResponse_H_
