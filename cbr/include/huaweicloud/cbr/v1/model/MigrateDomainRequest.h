
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateDomainRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateDomainRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/DomainMigrate.h>

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
class HUAWEICLOUD_CBR_V1_EXPORT  MigrateDomainRequest
    : public ModelBase
{
public:
    MigrateDomainRequest();
    virtual ~MigrateDomainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MigrateDomainRequest members

    /// <summary>
    /// 
    /// </summary>

    DomainMigrate getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DomainMigrate& value);


protected:
    DomainMigrate body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    MigrateDomainRequest& dereference_from_shared_ptr(std::shared_ptr<MigrateDomainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateDomainRequest_H_
