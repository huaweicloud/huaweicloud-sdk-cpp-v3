
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterInstanceBody_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterInstanceBody_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CreateClusterInstanceBody
    : public ModelBase
{
public:
    CreateClusterInstanceBody();
    virtual ~CreateClusterInstanceBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateClusterInstanceBody members

    /// <summary>
    /// 集群节点类型，hbase有regionserver，hmaster，opentsdb等，doris有be，fe节点，clickhouse有server（计算节点），zookeeper
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// 节点个数，hbase取值：2&lt;&#x3D;num&lt;&#x3D;10],偶数 doris取值：be[3,100] fe只能是3或5， clickhouse取值：计算节点[2,10000],取偶数，zookeeper节点固定为3
    /// </summary>

    int32_t getInstanceNum() const;
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(int32_t value);

    /// <summary>
    /// 节点规格，doris集群、clickhouse集群必选
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 数据盘规格：COMMON、HIGH、ULTRAHIGH，NORMALHIGH, EXTREMEHIGH. doris集群、clickhouse集群必选
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 数据盘大小，doris集群、clickhouse集群必选。 fe[200,2000] be[400,10000] server[500,10000] zookeeper[200,1000]
    /// </summary>

    int32_t getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(int32_t value);

    /// <summary>
    /// 节点入参类型 0：flavor模式 ，1：cu模式，doris、hbase、clickhouse都是flavor模式
    /// </summary>

    std::string getFlavorType() const;
    bool flavorTypeIsSet() const;
    void unsetflavorType();
    void setFlavorType(const std::string& value);


protected:
    std::string instanceType_;
    bool instanceTypeIsSet_;
    int32_t instanceNum_;
    bool instanceNumIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    int32_t volumeSize_;
    bool volumeSizeIsSet_;
    std::string flavorType_;
    bool flavorTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateClusterInstanceBody_H_
