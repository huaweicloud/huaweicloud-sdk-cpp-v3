
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseApplicationApiKeyRecord_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseApplicationApiKeyRecord_H_


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
/// ApiKey元数据记录（不含明文）。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SupabaseApplicationApiKeyRecord
    : public ModelBase
{
public:
    SupabaseApplicationApiKeyRecord();
    virtual ~SupabaseApplicationApiKeyRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupabaseApplicationApiKeyRecord members

    /// <summary>
    /// 
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getRemark() const;
    bool remarkIsSet() const;
    void unsetremark();
    void setRemark(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getCreatedUser() const;
    bool createdUserIsSet() const;
    void unsetcreatedUser();
    void setCreatedUser(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUpdatedUser() const;
    bool updatedUserIsSet() const;
    void unsetupdatedUser();
    void setUpdatedUser(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    int64_t getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    int64_t getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string remark_;
    bool remarkIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string createdUser_;
    bool createdUserIsSet_;
    std::string updatedUser_;
    bool updatedUserIsSet_;
    int64_t createdTime_;
    bool createdTimeIsSet_;
    int64_t updatedTime_;
    bool updatedTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SupabaseApplicationApiKeyRecord_H_
