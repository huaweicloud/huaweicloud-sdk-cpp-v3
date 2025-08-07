
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ListMigrationRecordResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ListMigrationRecordResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/ResourceMigrateRecord.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ListMigrationRecordResponse
    : public ModelBase, public HttpResponse
{
public:
    ListMigrationRecordResponse();
    virtual ~ListMigrationRecordResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMigrationRecordResponse members

    /// <summary>
    /// 资源迁移记录列表
    /// </summary>

    std::vector<ResourceMigrateRecord>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<ResourceMigrateRecord>& value);


protected:
    std::vector<ResourceMigrateRecord> records_;
    bool recordsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ListMigrationRecordResponse_H_
