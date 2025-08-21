
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedErResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedErResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ShowEwAssociatedErResp_data.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ShowEwAssociatedErResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowEwAssociatedErResponse();
    virtual ~ShowEwAssociatedErResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEwAssociatedErResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowEwAssociatedErResp_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const ShowEwAssociatedErResp_data& value);


protected:
    ShowEwAssociatedErResp_data data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ShowEwAssociatedErResponse_H_
