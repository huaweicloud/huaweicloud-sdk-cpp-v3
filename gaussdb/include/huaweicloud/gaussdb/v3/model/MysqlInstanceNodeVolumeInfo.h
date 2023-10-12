
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceNodeVolumeInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceNodeVolumeInfo_H_


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
/// 存储盘信息。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlInstanceNodeVolumeInfo
    : public ModelBase
{
public:
    MysqlInstanceNodeVolumeInfo();
    virtual ~MysqlInstanceNodeVolumeInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlInstanceNodeVolumeInfo members

    /// <summary>
    /// 磁盘类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 已使用磁盘大小，单位GB。
    /// </summary>

    std::string getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(const std::string& value);

    /// <summary>
    /// 包周期购买的存储空间大小，单位GB。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string used_;
    bool usedIsSet_;
    int64_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceNodeVolumeInfo_H_
