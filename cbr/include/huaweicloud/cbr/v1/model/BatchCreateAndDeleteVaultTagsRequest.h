
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchCreateAndDeleteVaultTagsRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchCreateAndDeleteVaultTagsRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/BulkCreateAndDeleteVaultTagsReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  BatchCreateAndDeleteVaultTagsRequest
    : public ModelBase
{
public:
    BatchCreateAndDeleteVaultTagsRequest();
    virtual ~BatchCreateAndDeleteVaultTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateAndDeleteVaultTagsRequest members

    /// <summary>
    /// 资源id
    /// </summary>

    std::string getVaultId() const;
    bool vaultIdIsSet() const;
    void unsetvaultId();
    void setVaultId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BulkCreateAndDeleteVaultTagsReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BulkCreateAndDeleteVaultTagsReq& value);


protected:
    std::string vaultId_;
    bool vaultIdIsSet_;
    BulkCreateAndDeleteVaultTagsReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateAndDeleteVaultTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateAndDeleteVaultTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_BatchCreateAndDeleteVaultTagsRequest_H_
