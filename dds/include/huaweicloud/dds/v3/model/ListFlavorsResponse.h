
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListFlavorsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListFlavorsResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/Flavor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ListFlavorsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFlavorsResponse();
    virtual ~ListFlavorsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListFlavorsResponse members

    /// <summary>
    /// 实例规格信息列表。
    /// </summary>

    std::vector<Flavor>& getFlavors();
    bool flavorsIsSet() const;
    void unsetflavors();
    void setFlavors(const std::vector<Flavor>& value);


protected:
    std::vector<Flavor> flavors_;
    bool flavorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListFlavorsResponse_H_
