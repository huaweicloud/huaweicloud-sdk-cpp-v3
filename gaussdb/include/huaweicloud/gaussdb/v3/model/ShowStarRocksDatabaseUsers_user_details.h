
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksDatabaseUsers_user_details_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksDatabaseUsers_user_details_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowStarRocksDatabaseUsers_user_details
    : public ModelBase
{
public:
    ShowStarRocksDatabaseUsers_user_details();
    virtual ~ShowStarRocksDatabaseUsers_user_details();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStarRocksDatabaseUsers_user_details members

    /// <summary>
    /// 数据库账户名。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 已授权数据库。
    /// </summary>

    std::vector<std::string>& getDataBases();
    bool dataBasesIsSet() const;
    void unsetdataBases();
    void setDataBases(const std::vector<std::string>& value);

    /// <summary>
    /// DML授权。 - 0：读写权限 - 1：只读权限 - 2：只读和设置权限 - 3：读写和设置权限
    /// </summary>

    int32_t getDml() const;
    bool dmlIsSet() const;
    void unsetdml();
    void setDml(int32_t value);

    /// <summary>
    /// DDL授权。 - 0：无DDL权限 - 1：有DDL权限
    /// </summary>

    int32_t getDdl() const;
    bool ddlIsSet() const;
    void unsetddl();
    void setDdl(int32_t value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::vector<std::string> dataBases_;
    bool dataBasesIsSet_;
    int32_t dml_;
    bool dmlIsSet_;
    int32_t ddl_;
    bool ddlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksDatabaseUsers_user_details_H_
