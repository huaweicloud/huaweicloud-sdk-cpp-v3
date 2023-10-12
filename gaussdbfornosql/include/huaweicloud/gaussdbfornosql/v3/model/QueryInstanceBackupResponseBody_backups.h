
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryInstanceBackupResponseBody_backups_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryInstanceBackupResponseBody_backups_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/QueryInstanceBackupResponseBody_datastore.h>
#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  QueryInstanceBackupResponseBody_backups
    : public ModelBase
{
public:
    QueryInstanceBackupResponseBody_backups();
    virtual ~QueryInstanceBackupResponseBody_backups();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryInstanceBackupResponseBody_backups members

    /// <summary>
    /// 备份ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 备份名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 备份描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 备份开始时间，格式为“yyyy-mm-dd hh:mm:ss”。该时间为UTC时间。
    /// </summary>

    utility::datetime getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const utility::datetime& value);

    /// <summary>
    /// 备份结束时间，格式为“yyyy-mm-dd hh:mm:ss”。该时间为UTC时间。
    /// </summary>

    utility::datetime getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const utility::datetime& value);

    /// <summary>
    /// 备份状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 备份大小，单位：KB。
    /// </summary>

    double getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(double value);

    /// <summary>
    /// 备份类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    QueryInstanceBackupResponseBody_datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const QueryInstanceBackupResponseBody_datastore& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    utility::datetime beginTime_;
    bool beginTimeIsSet_;
    utility::datetime endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    double size_;
    bool sizeIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    QueryInstanceBackupResponseBody_datastore datastore_;
    bool datastoreIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_QueryInstanceBackupResponseBody_backups_H_
