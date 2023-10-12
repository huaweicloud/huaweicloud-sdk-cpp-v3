
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListVersionResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListVersionResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/VersionItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVersionResponse();
    virtual ~ListVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVersionResponse members

    /// <summary>
    /// 
    /// </summary>

    VersionItem getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const VersionItem& value);


protected:
    VersionItem version_;
    bool versionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListVersionResponse_H_
