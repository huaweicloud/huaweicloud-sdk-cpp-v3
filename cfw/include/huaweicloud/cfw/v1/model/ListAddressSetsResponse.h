
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAddressSetsResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAddressSetsResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AddressSetListResponseDTO_data.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ListAddressSetsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAddressSetsResponse();
    virtual ~ListAddressSetsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAddressSetsResponse members

    /// <summary>
    /// 
    /// </summary>

    AddressSetListResponseDTO_data getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const AddressSetListResponseDTO_data& value);


protected:
    AddressSetListResponseDTO_data data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListAddressSetsResponse_H_
