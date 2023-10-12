
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListVersionsResponse_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListVersionsResponse_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/VersionItem.h>
#include <vector>

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
class HUAWEICLOUD_SMN_V2_EXPORT  ListVersionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVersionsResponse();
    virtual ~ListVersionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVersionsResponse members

    /// <summary>
    /// 描述version相关对象的列表。
    /// </summary>

    std::vector<VersionItem>& getVersions();
    bool versionsIsSet() const;
    void unsetversions();
    void setVersions(const std::vector<VersionItem>& value);


protected:
    std::vector<VersionItem> versions_;
    bool versionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListVersionsResponse_H_
