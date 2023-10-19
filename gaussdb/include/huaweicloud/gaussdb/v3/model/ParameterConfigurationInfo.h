
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParameterConfigurationInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParameterConfigurationInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ParameterConfigurationInfo
    : public ModelBase
{
public:
    ParameterConfigurationInfo();
    virtual ~ParameterConfigurationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParameterConfigurationInfo members

    /// <summary>
    /// 数据库版本名称。
    /// </summary>

    std::string getDatastoreVersionName() const;
    bool datastoreVersionNameIsSet() const;
    void unsetdatastoreVersionName();
    void setDatastoreVersionName(const std::string& value);

    /// <summary>
    /// 数据库名称。
    /// </summary>

    std::string getDatastoreName() const;
    bool datastoreNameIsSet() const;
    void unsetdatastoreName();
    void setDatastoreName(const std::string& value);

    /// <summary>
    /// 创建时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 更新时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。  其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);


protected:
    std::string datastoreVersionName_;
    bool datastoreVersionNameIsSet_;
    std::string datastoreName_;
    bool datastoreNameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ParameterConfigurationInfo_H_
