
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Nfs_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Nfs_H_


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
/// nfs方式的挂载卷。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Nfs
    : public ModelBase
{
public:
    Nfs();
    virtual ~Nfs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Nfs members

    /// <summary>
    /// nfs服务端路径，如：“10.10.10.10:/example/path”。
    /// </summary>

    std::string getNfsServerPath() const;
    bool nfsServerPathIsSet() const;
    void unsetnfsServerPath();
    void setNfsServerPath(const std::string& value);

    /// <summary>
    /// 挂载到训练容器中的路径，如：“/example/path”。
    /// </summary>

    std::string getLocalPath() const;
    bool localPathIsSet() const;
    void unsetlocalPath();
    void setLocalPath(const std::string& value);

    /// <summary>
    /// nfs挂载卷在容器中是否只读。
    /// </summary>

    bool isReadOnly() const;
    bool readOnlyIsSet() const;
    void unsetreadOnly();
    void setReadOnly(bool value);


protected:
    std::string nfsServerPath_;
    bool nfsServerPathIsSet_;
    std::string localPath_;
    bool localPathIsSet_;
    bool readOnly_;
    bool readOnlyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Nfs_H_
