
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListAuditAgentRequest
    : public ModelBase
{
public:
    ListAuditAgentRequest();
    virtual ~ListAuditAgentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAuditAgentRequest members

    /// <summary>
    /// 实例ID。可在查询实例列表接口的ID字段获取。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 数据库ID,可在查询数据库列表接口ID字段获取。
    /// </summary>

    std::string getDbId() const;
    bool dbIdIsSet() const;
    void unsetdbId();
    void setDbId(const std::string& value);

    /// <summary>
    /// 偏移量
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询记录数
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string dbId_;
    bool dbIdIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAuditAgentRequest& dereference_from_shared_ptr(std::shared_ptr<ListAuditAgentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListAuditAgentRequest_H_
