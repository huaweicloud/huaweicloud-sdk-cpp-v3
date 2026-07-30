
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmOutput_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmOutput_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/Remote.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法输出通道信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmOutput
    : public ModelBase
{
public:
    AlgorithmOutput();
    virtual ~AlgorithmOutput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmOutput members

    /// <summary>
    /// 数据输出通道名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据输出通道映射的容器本地路径。
    /// </summary>

    std::string getLocalDir() const;
    bool localDirIsSet() const;
    void unsetlocalDir();
    void setLocalDir(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Remote getRemote() const;
    bool remoteIsSet() const;
    void unsetremote();
    void setRemote(const Remote& value);

    /// <summary>
    /// 数据传输模式，默认为“upload_periodically”。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 数据传输周期，默认为30s。
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string localDir_;
    bool localDirIsSet_;
    Remote remote_;
    bool remoteIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string period_;
    bool periodIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmOutput_H_
