
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DatabaseInfoItem_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DatabaseInfoItem_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  DatabaseInfoItem
    : public ModelBase
{
public:
    DatabaseInfoItem();
    virtual ~DatabaseInfoItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DatabaseInfoItem members

    /// <summary>
    /// 数据库名称, config admin 库不做展示。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据库存储大小（以GB为单位）,保留两位小数。 存储大小: 实际磁盘上占用的物理空间大小，包括数据文件、日志文件、索引文件等。
    /// </summary>

    std::string getDataSize() const;
    bool dataSizeIsSet() const;
    void unsetdataSize();
    void setDataSize(const std::string& value);

    /// <summary>
    /// 数据库逻辑大小 （以GB为单位）,保留两位小数。 逻辑大小指的是数据库中实际存储的数据大小，不包括索引大小、日志大小等。
    /// </summary>

    std::string getStorageSize() const;
    bool storageSizeIsSet() const;
    void unsetstorageSize();
    void setStorageSize(const std::string& value);

    /// <summary>
    /// 数据库中的集合数。
    /// </summary>

    int32_t getCollectionNum() const;
    bool collectionNumIsSet() const;
    void unsetcollectionNum();
    void setCollectionNum(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string dataSize_;
    bool dataSizeIsSet_;
    std::string storageSize_;
    bool storageSizeIsSet_;
    int32_t collectionNum_;
    bool collectionNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DatabaseInfoItem_H_
