#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableClient_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableClient_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cloudtable/v2/model/AddComponentReq.h>
#include <huaweicloud/cloudtable/v2/model/CreateClusterRequest.h>
#include <huaweicloud/cloudtable/v2/model/CreateClusterRequestBody.h>
#include <huaweicloud/cloudtable/v2/model/CreateClusterResponse.h>
#include <huaweicloud/cloudtable/v2/model/DeleteClusterRequest.h>
#include <huaweicloud/cloudtable/v2/model/DeleteClusterResponse.h>
#include <huaweicloud/cloudtable/v2/model/EnableComponentRequest.h>
#include <huaweicloud/cloudtable/v2/model/EnableComponentResponse.h>
#include <huaweicloud/cloudtable/v2/model/ExpandClusterComponentRequest.h>
#include <huaweicloud/cloudtable/v2/model/ExpandClusterComponentResponse.h>
#include <huaweicloud/cloudtable/v2/model/GrowNodeReq.h>
#include <huaweicloud/cloudtable/v2/model/HbaseClusterActionReq.h>
#include <huaweicloud/cloudtable/v2/model/HbaseModifySettingV2Req.h>
#include <huaweicloud/cloudtable/v2/model/ListClustersRequest.h>
#include <huaweicloud/cloudtable/v2/model/ListClustersResponse.h>
#include <huaweicloud/cloudtable/v2/model/RebootCloudTableClusterRequest.h>
#include <huaweicloud/cloudtable/v2/model/RebootCloudTableClusterResponse.h>
#include <huaweicloud/cloudtable/v2/model/RestartInstanceRsp.h>
#include <huaweicloud/cloudtable/v2/model/ShowClusterDetailRequest.h>
#include <huaweicloud/cloudtable/v2/model/ShowClusterDetailResponse.h>
#include <huaweicloud/cloudtable/v2/model/ShowClusterSettingRequest.h>
#include <huaweicloud/cloudtable/v2/model/ShowClusterSettingResponse.h>
#include <huaweicloud/cloudtable/v2/model/UpdateClusterSettingRequest.h>
#include <huaweicloud/cloudtable/v2/model/UpdateClusterSettingResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cloudtable::V2::Model;

class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CloudTableClient : public Client
{
public:

    CloudTableClient();

    virtual ~CloudTableClient();

    static ClientBuilder<CloudTableClient> newBuilder();

    // 创建CloudTable集群
    //
    // 创建一个CloudTable集群。
    // 使用接口前，您需要先获取如下资源信息。
    // - 通过VPC创建或查询VPC、子网
    // - 通过安全组创建或查询可用的security_group_id
    // 
    // 本接口是一个同步接口，当创建CloudTable集群成功后会返回集群id。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateClusterResponse> createCluster(
        CreateClusterRequest &request
    );
    // 删除CloudTable指定集群
    //
    // 集群ID为集群唯一标识，根据集群ID删除指定集群。
    // 如下状态的集群不允许删除：
    // - 创建中
    // - 扩容中
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteClusterResponse> deleteCluster(
        DeleteClusterRequest &request
    );
    // 开启opentsdb组件
    //
    // 开启opentsdb组件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableComponentResponse> enableComponent(
        EnableComponentRequest &request
    );
    // 扩容组件
    //
    // 扩容指定类型的集群节点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExpandClusterComponentResponse> expandClusterComponent(
        ExpandClusterComponentRequest &request
    );
    // 查询CloudTable集群列表
    //
    // 查看用户创建的集群列表信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListClustersResponse> listClusters(
        ListClustersRequest &request
    );
    // 重启集群的api入口
    //
    // 重启集群的api入口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RebootCloudTableClusterResponse> rebootCloudTableCluster(
        RebootCloudTableClusterRequest &request
    );
    // 查询CloudTable集群详情
    //
    // 通过集群ID唯一标识一个集群，根据集群ID查询特定CloudTable集群的详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterDetailResponse> showClusterDetail(
        ShowClusterDetailRequest &request
    );
    // 查询集群配置
    //
    // 查询集群配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowClusterSettingResponse> showClusterSetting(
        ShowClusterSettingRequest &request
    );
    // 修改集群配置
    //
    // 修改集群配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateClusterSettingResponse> updateClusterSetting(
        UpdateClusterSettingRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const utility::datetime &value);
    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cloudtable::V2::CloudTableClient>;

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_CloudTableClient_H_

