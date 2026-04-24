
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListSupportLinksResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListSupportLinksResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SupportLinksResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ListSupportLinksResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSupportLinksResponse();
    virtual ~ListSupportLinksResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSupportLinksResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<SupportLinksResp>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<SupportLinksResp>& value);


protected:
    std::vector<SupportLinksResp> body_;
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

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListSupportLinksResponse_H_
