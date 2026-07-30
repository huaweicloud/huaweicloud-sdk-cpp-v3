
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmInput_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmInput_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/modelarts/v1/model/AlgorithmRemote.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法输入通道信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmInput
    : public ModelBase
{
public:
    AlgorithmInput();
    virtual ~AlgorithmInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmInput members

    /// <summary>
    /// 数据输入通道名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据输入输出通道映射的容器本地路径。
    /// </summary>

    std::string getLocalDir() const;
    bool localDirIsSet() const;
    void unsetlocalDir();
    void setLocalDir(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AlgorithmRemote getRemote() const;
    bool remoteIsSet() const;
    void unsetremote();
    void setRemote(const AlgorithmRemote& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string localDir_;
    bool localDirIsSet_;
    AlgorithmRemote remote_;
    bool remoteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmInput_H_
