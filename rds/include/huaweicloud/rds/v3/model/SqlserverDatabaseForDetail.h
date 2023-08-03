
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverDatabaseForDetail_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverDatabaseForDetail_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 数据库信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SqlserverDatabaseForDetail
    : public ModelBase
{
public:
    SqlserverDatabaseForDetail();
    virtual ~SqlserverDatabaseForDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SqlserverDatabaseForDetail members

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库使用的字符集，例如Chinese_PRC_CI_AS等。
    /// </summary>

    std::string getCharacterSet() const;
    bool characterSetIsSet() const;
    void unsetcharacterSet();
    void setCharacterSet(const std::string& value);

    /// <summary>
    /// 数据库状态。取值如下:  Creating:表示创建中。 Running:表示使用中。 Deleting:表示删除中。 NotExists:表示不存在。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string characterSet_;
    bool characterSetIsSet_;
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SqlserverDatabaseForDetail_H_
