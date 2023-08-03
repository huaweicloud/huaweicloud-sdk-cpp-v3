
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlEngineVersionInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlEngineVersionInfo_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlEngineVersionInfo
    : public ModelBase
{
public:
    MysqlEngineVersionInfo();
    virtual ~MysqlEngineVersionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlEngineVersionInfo members

    /// <summary>
    /// 数据库版本ID，该字段不会有重复
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 数据库版本号，只返回两位数的大版本号
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 兼容的开源数据库版本号，返回三位开源版本号。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// 数据库版本号，返回完整的四位版本号。
    /// </summary>

    std::string getKernelVersion() const;
    bool kernelVersionIsSet() const;
    void unsetkernelVersion();
    void setKernelVersion(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string version_;
    bool versionIsSet_;
    std::string kernelVersion_;
    bool kernelVersionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlEngineVersionInfo_H_
