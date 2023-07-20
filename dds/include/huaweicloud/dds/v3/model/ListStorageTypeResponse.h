
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ListStorageTypeResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ListStorageTypeResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/Storage.h>
#include <huaweicloud/dds/v3/model/DssPoolInfo.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  ListStorageTypeResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStorageTypeResponse();
    virtual ~ListStorageTypeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStorageTypeResponse members

    /// <summary>
    /// 实例磁盘类型信息。
    /// </summary>

    std::vector<Storage>& getStorageType();
    bool storageTypeIsSet() const;
    void unsetstorageType();
    void setStorageType(const std::vector<Storage>& value);

    /// <summary>
    /// 实例专属存储信息。
    /// </summary>

    std::vector<DssPoolInfo>& getDssPoolInfo();
    bool dssPoolInfoIsSet() const;
    void unsetdssPoolInfo();
    void setDssPoolInfo(const std::vector<DssPoolInfo>& value);


protected:
    std::vector<Storage> storageType_;
    bool storageTypeIsSet_;
    std::vector<DssPoolInfo> dssPoolInfo_;
    bool dssPoolInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ListStorageTypeResponse_H_
