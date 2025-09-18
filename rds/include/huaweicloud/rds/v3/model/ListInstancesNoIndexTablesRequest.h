
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesNoIndexTablesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesNoIndexTablesRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesNoIndexTablesRequest
    : public ModelBase
{
public:
    ListInstancesNoIndexTablesRequest();
    virtual ~ListInstancesNoIndexTablesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesNoIndexTablesRequest members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 指定查询是否应侧重于检索最新或最新的特殊表。
    /// </summary>

    bool isNewest() const;
    bool newestIsSet() const;
    void unsetnewest();
    void setNewest(bool value);

    /// <summary>
    /// 表格类型。
    /// </summary>

    std::string getTableType() const;
    bool tableTypeIsSet() const;
    void unsettableType();
    void setTableType(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    bool newest_;
    bool newestIsSet_;
    std::string tableType_;
    bool tableTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInstancesNoIndexTablesRequest& dereference_from_shared_ptr(std::shared_ptr<ListInstancesNoIndexTablesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesNoIndexTablesRequest_H_
