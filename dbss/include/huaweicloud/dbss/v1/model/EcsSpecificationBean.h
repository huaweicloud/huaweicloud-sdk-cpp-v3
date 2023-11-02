
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_EcsSpecificationBean_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_EcsSpecificationBean_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  EcsSpecificationBean
    : public ModelBase
{
public:
    EcsSpecificationBean();
    virtual ~EcsSpecificationBean();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EcsSpecificationBean members

    /// <summary>
    /// 可用区集合
    /// </summary>

    std::vector<std::string>& getAzs();
    bool azsIsSet() const;
    void unsetazs();
    void setAzs(const std::vector<std::string>& value);

    /// <summary>
    /// ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 等级
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 代理
    /// </summary>

    int32_t getProxy() const;
    bool proxyIsSet() const;
    void unsetproxy();
    void setProxy(int32_t value);

    /// <summary>
    /// 内存
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// CPU
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);


protected:
    std::vector<std::string> azs_;
    bool azsIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t proxy_;
    bool proxyIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_EcsSpecificationBean_H_
