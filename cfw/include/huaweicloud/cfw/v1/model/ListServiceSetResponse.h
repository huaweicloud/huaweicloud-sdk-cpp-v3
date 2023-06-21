
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListServiceSetResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListServiceSetResponse_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/ServiceSetRecords.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ListServiceSetResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServiceSetResponse();
    virtual ~ListServiceSetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServiceSetResponse members

    /// <summary>
    /// 
    /// </summary>

    ServiceSetRecords getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const ServiceSetRecords& value);


protected:
    ServiceSetRecords data_;
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

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListServiceSetResponse_H_
