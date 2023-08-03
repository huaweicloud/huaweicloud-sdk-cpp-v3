
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListStorageTypesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListStorageTypesResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Storage.h>
#include <huaweicloud/rds/v3/model/DssPoolInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListStorageTypesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStorageTypesResponse();
    virtual ~ListStorageTypesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStorageTypesResponse members

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

    std::vector<DssPoolInfo>& getDsspoolInfo();
    bool dsspoolInfoIsSet() const;
    void unsetdsspoolInfo();
    void setDsspoolInfo(const std::vector<DssPoolInfo>& value);


protected:
    std::vector<Storage> storageType_;
    bool storageTypeIsSet_;
    std::vector<DssPoolInfo> dsspoolInfo_;
    bool dsspoolInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListStorageTypesResponse_H_
