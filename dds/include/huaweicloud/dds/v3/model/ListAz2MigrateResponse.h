
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAz2MigrateResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAz2MigrateResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/Az2Migrate.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ListAz2MigrateResponse
    : public ModelBase, public HttpResponse
{
public:
    ListAz2MigrateResponse();
    virtual ~ListAz2MigrateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListAz2MigrateResponse members

    /// <summary>
    /// 可用区具体信息。
    /// </summary>

    std::vector<Az2Migrate>& getAzList();
    bool azListIsSet() const;
    void unsetazList();
    void setAzList(const std::vector<Az2Migrate>& value);


protected:
    std::vector<Az2Migrate> azList_;
    bool azListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListAz2MigrateResponse_H_
