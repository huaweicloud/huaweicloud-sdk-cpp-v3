
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListGrantsResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListGrantsResponse_H_


#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/GrantDTO.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListGrantsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGrantsResponse();
    virtual ~ListGrantsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGrantsResponse members

    /// <summary>
    /// 
    /// </summary>

    GrantDTO getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const GrantDTO& value);


protected:
    GrantDTO data_;
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

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListGrantsResponse_H_
