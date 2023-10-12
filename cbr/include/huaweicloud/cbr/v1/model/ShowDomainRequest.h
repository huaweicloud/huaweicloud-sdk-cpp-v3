
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowDomainRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowDomainRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ShowDomainRequest
    : public ModelBase
{
public:
    ShowDomainRequest();
    virtual ~ShowDomainRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDomainRequest members

    /// <summary>
    /// 源项目ID
    /// </summary>

    std::string getSourceProjectId() const;
    bool sourceProjectIdIsSet() const;
    void unsetsourceProjectId();
    void setSourceProjectId(const std::string& value);


protected:
    std::string sourceProjectId_;
    bool sourceProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowDomainRequest_H_
