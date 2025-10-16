
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ArticlePropertiesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ArticlePropertiesResponse_H_


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
/// 项目属性。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ArticlePropertiesResponse
    : public ModelBase
{
public:
    ArticlePropertiesResponse();
    virtual ~ArticlePropertiesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ArticlePropertiesResponse members

    /// <summary>
    /// 目标对象名称。
    /// </summary>

    std::string getDestinationObjectName() const;
    bool destinationObjectNameIsSet() const;
    void unsetdestinationObjectName();
    void setDestinationObjectName(const std::string& value);

    /// <summary>
    /// 目标对象命名空间。
    /// </summary>

    std::string getDestinationObjectOwner() const;
    bool destinationObjectOwnerIsSet() const;
    void unsetdestinationObjectOwner();
    void setDestinationObjectOwner(const std::string& value);

    /// <summary>
    /// 插入交付格式。
    /// </summary>

    std::string getInsertDeliveryFormat() const;
    bool insertDeliveryFormatIsSet() const;
    void unsetinsertDeliveryFormat();
    void setInsertDeliveryFormat(const std::string& value);

    /// <summary>
    /// 插入存储过程。插入交付格式填call_procedure时该项必填。
    /// </summary>

    std::string getInsertStoredProcedure() const;
    bool insertStoredProcedureIsSet() const;
    void unsetinsertStoredProcedure();
    void setInsertStoredProcedure(const std::string& value);

    /// <summary>
    /// 更新交付格式。
    /// </summary>

    std::string getUpdateDeliveryFormat() const;
    bool updateDeliveryFormatIsSet() const;
    void unsetupdateDeliveryFormat();
    void setUpdateDeliveryFormat(const std::string& value);

    /// <summary>
    /// 更新存储过程。更新交付格式填(m/x/s)call_procedure时该项必填。
    /// </summary>

    std::string getUpdateStoredProcedure() const;
    bool updateStoredProcedureIsSet() const;
    void unsetupdateStoredProcedure();
    void setUpdateStoredProcedure(const std::string& value);

    /// <summary>
    /// 删除交付格式。
    /// </summary>

    std::string getDeleteDeliveryFormat() const;
    bool deleteDeliveryFormatIsSet() const;
    void unsetdeleteDeliveryFormat();
    void setDeleteDeliveryFormat(const std::string& value);

    /// <summary>
    /// 删除存储过程。删除交付格式填(x)call_procedure时该项必填。
    /// </summary>

    std::string getDeleteStoredProcedure() const;
    bool deleteStoredProcedureIsSet() const;
    void unsetdeleteStoredProcedure();
    void setDeleteStoredProcedure(const std::string& value);


protected:
    std::string destinationObjectName_;
    bool destinationObjectNameIsSet_;
    std::string destinationObjectOwner_;
    bool destinationObjectOwnerIsSet_;
    std::string insertDeliveryFormat_;
    bool insertDeliveryFormatIsSet_;
    std::string insertStoredProcedure_;
    bool insertStoredProcedureIsSet_;
    std::string updateDeliveryFormat_;
    bool updateDeliveryFormatIsSet_;
    std::string updateStoredProcedure_;
    bool updateStoredProcedureIsSet_;
    std::string deleteDeliveryFormat_;
    bool deleteDeliveryFormatIsSet_;
    std::string deleteStoredProcedure_;
    bool deleteStoredProcedureIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ArticlePropertiesResponse_H_
