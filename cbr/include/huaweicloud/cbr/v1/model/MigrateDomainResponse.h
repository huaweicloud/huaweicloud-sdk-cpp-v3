
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateDomainResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateDomainResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  MigrateDomainResponse
    : public ModelBase, public HttpResponse
{
public:
    MigrateDomainResponse();
    virtual ~MigrateDomainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MigrateDomainResponse members

    /// <summary>
    /// 
    /// </summary>

    std::map<std::string, std::string>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::map<std::string, std::string>& value);


protected:
    std::map<std::string, std::string> body_;
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

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_MigrateDomainResponse_H_
