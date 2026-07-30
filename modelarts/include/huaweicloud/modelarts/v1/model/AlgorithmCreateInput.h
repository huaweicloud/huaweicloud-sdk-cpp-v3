
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmCreateInput_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmCreateInput_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RemoteConstraint.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 算法的数据输入。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AlgorithmCreateInput
    : public ModelBase
{
public:
    AlgorithmCreateInput();
    virtual ~AlgorithmCreateInput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AlgorithmCreateInput members

    /// <summary>
    /// 数据输入通道名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数据输入通道描述信息。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 数据输入约束。
    /// </summary>

    std::vector<RemoteConstraint>& getRemoteConstraints();
    bool remoteConstraintsIsSet() const;
    void unsetremoteConstraints();
    void setRemoteConstraints(const std::vector<RemoteConstraint>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<RemoteConstraint> remoteConstraints_;
    bool remoteConstraintsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AlgorithmCreateInput_H_
