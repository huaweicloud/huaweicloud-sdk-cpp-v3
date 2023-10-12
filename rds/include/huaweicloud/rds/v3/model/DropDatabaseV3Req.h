
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DropDatabaseV3Req_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DropDatabaseV3Req_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DropDatabaseV3Req
    : public ModelBase
{
public:
    DropDatabaseV3Req();
    virtual ~DropDatabaseV3Req();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DropDatabaseV3Req members

    /// <summary>
    /// 是否强制删除数据库，默认是false。
    /// </summary>

    bool isIsForceDelete() const;
    bool isForceDeleteIsSet() const;
    void unsetisForceDelete();
    void setIsForceDelete(bool value);


protected:
    bool isForceDelete_;
    bool isForceDeleteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DropDatabaseV3Req_H_
