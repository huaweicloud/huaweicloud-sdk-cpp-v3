
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstancesResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstancesResult_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  InstancesResult
    : public ModelBase
{
public:
    InstancesResult();
    virtual ~InstancesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InstancesResult members

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 存储类型。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 磁盘大小，单位：GB。
    /// </summary>

    double getDataVolumeSize() const;
    bool dataVolumeSizeIsSet() const;
    void unsetdataVolumeSize();
    void setDataVolumeSize(double value);

    /// <summary>
    /// 实例版本信息。
    /// </summary>

    double getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(double value);

    /// <summary>
    /// 部署形态。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 实例模型，企业版，标准版，基础版。
    /// </summary>

    std::string getInstanceMode() const;
    bool instanceModeIsSet() const;
    void unsetinstanceMode();
    void setInstanceMode(const std::string& value);


protected:
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    double dataVolumeSize_;
    bool dataVolumeSizeIsSet_;
    double version_;
    bool versionIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string instanceMode_;
    bool instanceModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_InstancesResult_H_
