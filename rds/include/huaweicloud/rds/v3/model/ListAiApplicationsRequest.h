
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAiApplicationsRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAiApplicationsRequest_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  ListAiApplicationsRequest
    : public ModelBase
{
public:
    ListAiApplicationsRequest();
    virtual ~ListAiApplicationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAiApplicationsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 按应用名称查询。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 按应用ID查询。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 按应用类型查询。Supabase传supabase。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 按部署模式查询。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 按状态查询。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 按关联PG实例ID查询。
    /// </summary>

    std::string getManagedInstanceId() const;
    bool managedInstanceIdIsSet() const;
    void unsetmanagedInstanceId();
    void setManagedInstanceId(const std::string& value);

    /// <summary>
    /// 按关联PG实例名称查询。
    /// </summary>

    std::string getManagedInstanceName() const;
    bool managedInstanceNameIsSet() const;
    void unsetmanagedInstanceName();
    void setManagedInstanceName(const std::string& value);

    /// <summary>
    /// 按是否开启SSL查询。
    /// </summary>

    bool isEnableSsl() const;
    bool enableSslIsSet() const;
    void unsetenableSsl();
    void setEnableSsl(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStartCreatedTime() const;
    bool startCreatedTimeIsSet() const;
    void unsetstartCreatedTime();
    void setStartCreatedTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getEndCreatedTime() const;
    bool endCreatedTimeIsSet() const;
    void unsetendCreatedTime();
    void setEndCreatedTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string managedInstanceId_;
    bool managedInstanceIdIsSet_;
    std::string managedInstanceName_;
    bool managedInstanceNameIsSet_;
    bool enableSsl_;
    bool enableSslIsSet_;
    std::string startCreatedTime_;
    bool startCreatedTimeIsSet_;
    std::string endCreatedTime_;
    bool endCreatedTimeIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAiApplicationsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAiApplicationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAiApplicationsRequest_H_
