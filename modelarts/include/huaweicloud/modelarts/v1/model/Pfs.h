
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Pfs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Pfs_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业obsfs挂载卷信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Pfs
    : public ModelBase
{
public:
    Pfs();
    virtual ~Pfs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Pfs members

    /// <summary>
    /// obsfs的地址。如：“/test-bucket/path”。
    /// </summary>

    std::string getPfsPath() const;
    bool pfsPathIsSet() const;
    void unsetpfsPath();
    void setPfsPath(const std::string& value);

    /// <summary>
    /// 挂载到训练容器中的路径，如：“/example/path”。
    /// </summary>

    std::string getLocalPath() const;
    bool localPathIsSet() const;
    void unsetlocalPath();
    void setLocalPath(const std::string& value);


protected:
    std::string pfsPath_;
    bool pfsPathIsSet_;
    std::string localPath_;
    bool localPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Pfs_H_
