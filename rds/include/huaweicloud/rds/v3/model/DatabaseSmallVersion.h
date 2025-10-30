
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseSmallVersion_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseSmallVersion_H_


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
/// 版本信息对象
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DatabaseSmallVersion
    : public ModelBase
{
public:
    DatabaseSmallVersion();
    virtual ~DatabaseSmallVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseSmallVersion members

    /// <summary>
    /// 参数解释： 数据库版本ID，该字段不会有重复。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 参数解释： 数据库版本号。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 参数解释： 是否优选版本。
    /// </summary>

    bool isFavored() const;
    bool favoredIsSet() const;
    void unsetfavored();
    void setFavored(bool value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool favored_;
    bool favoredIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DatabaseSmallVersion_H_
