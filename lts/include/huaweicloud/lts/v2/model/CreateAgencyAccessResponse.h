
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAgencyAccessResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAgencyAccessResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LTSAccessConfigInfoRespon200.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateAgencyAccessResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAgencyAccessResponse();
    virtual ~CreateAgencyAccessResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAgencyAccessResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<LTSAccessConfigInfoRespon200>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<LTSAccessConfigInfoRespon200>& value);


protected:
    std::vector<LTSAccessConfigInfoRespon200> body_;
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAgencyAccessResponse_H_
